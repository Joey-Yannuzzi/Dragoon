using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using unit;

public class AttackSequenceUI : MonoBehaviour
{
    //Variables
    [SerializeField] private TextMeshProUGUI miss;
    [SerializeField] private TextMeshProUGUI playerHit, playerDmg, playerCrit, playerHp;
    [SerializeField] private TextMeshProUGUI enemyHit, enemyDmg, enemyCrit, enemyHp;
    [SerializeField] private int frameRate;
    [SerializeField] private int time;
    private GameObject attackSequence, player, enemy;
    private int frame;
    private bool isActive = false;
    private int hpPlayer;
    private int hpEnemy;
    private int playerDam, enemyDam;

    private void Update()
    {
        if (attackSequence.GetComponent<AttackSequenceAnimation>().getPlayerAttacks() == 0 && attackSequence.GetComponent<AttackSequenceAnimation>().getEnemyAttacks() == 0 && attackSequence.GetComponent<AttackSequenceAnimation>().getInit())
        {
            Reset();
        }
    }

    private void Reset()
    {
        this.gameObject.SetActive(false);
        Destroy(attackSequence);
        frame = 0;
        try
        {
            player.GetComponent<Unit>().Reset(true);
        }
        catch
        {
            Debug.Log("attacker eliminated");
        }

        try
        {
            enemy.GetComponent<Unit>().Reset(false);
        }
        catch
        {
            Debug.Log("target eliminated");
        }

        attackSequence = null;
        player = null;
        enemy = null;
        setActive(false);
    }
    public void sequenceInit(GameObject player, GameObject enemy, GameObject sequence, int playerAttacks, int enemyAttacks)
    {
        this.player = player;
        this.enemy = enemy;
        playerDam = player.GetComponent<Unit>().getDamage(enemy);
        enemyDam = enemy.GetComponent<Unit>().getDamage(player);
        setActive(true);
        attackSequence = sequence;
        setMiss("");
        setPlayerHit("HIT: " + player.GetComponent<Unit>().getHit(enemy));
        setPlayerDmg("DMG: " + player.GetComponent<Unit>().getDamage(enemy));
        setPlayerCrit("CRT: 0");
        setPlayerHp(player.GetComponent<Unit>().getHp());
        setEnemyHit("HIT: " + enemy.GetComponent<Unit>().getHit(player));
        setEnemyDmg("DMG: " + enemy.GetComponent<Unit>().getDamage(player));
        setEnemyCrit("CRT: 0");
        setEnemyHp(enemy.GetComponent<Unit>().getHp());
        attackSequence.GetComponent<AttackSequenceAnimation>().setPlayerAttacks(playerAttacks);
        attackSequence.GetComponent<AttackSequenceAnimation>().setEnemyAttacks(enemyAttacks);
        attackSequence.GetComponent<AttackSequenceAnimation>().animationInit(true, this.gameObject, player, enemy);
    }

    public bool getActive()
    {
        return (isActive);
    }

    private void setActive(bool isActive)
    {
        this.isActive = isActive;
    }

    private TextMeshProUGUI getMiss()
    {
        return (miss);
    }

    public void setMiss(string miss)
    {
        this.miss.text = miss;
    }

    private TextMeshProUGUI getPlayerHit()
    {
        return (playerHit);
    }

    private void setPlayerHit(string playerHit)
    {
        this.playerHit.text = playerHit;
    }

    private TextMeshProUGUI getPlayerDmg()
    {
        return (playerDmg);
    }

    private void setPlayerDmg(string playerDmg)
    {
        this.playerDmg.text = playerDmg;
    }

    private TextMeshProUGUI getPlayerCrit()
    {
        return (playerCrit);
    }

    private void setPlayerCrit(string playerCrit)
    {
        this.playerCrit.text = playerCrit;
    }

    private TextMeshProUGUI getPlayerHp()
    {
        return (playerHp);
    }

    public void setPlayerHp(int playerHp)
    {
        hpPlayer = playerHp;
        this.playerHp.text = "HP: " + playerHp;
    }

    private TextMeshProUGUI getEnemyHit()
    {
        return (enemyHit);
    }

    private void setEnemyHit(string enemyHit)
    {
        this.enemyHit.text = enemyHit;
    }

    private TextMeshProUGUI getEnemyDmg()
    {
        return (enemyDmg);
    }

    private void setEnemyDmg(string enemyDmg)
    {
        this.enemyDmg.text = enemyDmg;
    }

    private TextMeshProUGUI getEnemyCrit()
    {
        return (enemyCrit);
    }

    private void setEnemyCrit(string enemyCrit)
    {
        this.enemyCrit.text = enemyCrit;
    }

    private TextMeshProUGUI getEnemyHp()
    {
        return (enemyHp);
    }

    public void setEnemyHp(int enemyHp)
    {
        hpEnemy = enemyHp;
        this.enemyHp.text = "HP: " + enemyHp;
    }

    public int getHpPlayer()
    {
        return (hpPlayer);
    }

    public int getHpEnemy()
    {
        return (hpEnemy);
    }
}
