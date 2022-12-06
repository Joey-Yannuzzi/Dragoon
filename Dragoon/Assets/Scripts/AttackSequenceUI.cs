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

    public void sequenceInit(GameObject player, GameObject enemy)
    {
        setMiss("");
        setPlayerHit("HIT: " + player.GetComponent<Unit>().getHit(enemy));
        setPlayerDmg("DMG: " + player.GetComponent<Unit>().getDamage(enemy));
        setPlayerCrit("CRT: 0");
        //setPlayerHp(player.GetComponent<Unit>().getHp());
        setEnemyHit("HIT: " + enemy.GetComponent<Unit>().getHit(player));
        setEnemyDmg("DMG: " + enemy.GetComponent<Unit>().getDamage(player));
        setEnemyCrit("CRT: 0");
    }

    private TextMeshProUGUI getMiss()
    {
        return (miss);
    }

    private void setMiss(string miss)
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

    private void setPlayerHp(string playerHp)
    {
        this.playerHp.text = playerHp;
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

    private void setEnemyHp(string enemyHp)
    {
        this.enemyHp.text = enemyHp;
    }
}
