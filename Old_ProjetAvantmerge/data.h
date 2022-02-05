#ifndef __DATA_H__
#define __DATA_H__
#include <stdio.h> 
#include <netinet/in.h>
#include <arpa/inet.h> 
#include "reqRep.h"
#include "basic_func.h"
//C6-representation data:
/*
    ->choisir un codage asci/EBCID/...
        (implicite)
    ->serialisation/déserialisation:network Order
        ntohs();
        htons();
        short<->networkOrder
*/
typedef struct 
{
    char ip[MAX_LEN];
    int port;
    char pseudo[MAX_LEN];
}adresse_t;

typedef enum{
    RUNNING = 0,
    STOPPED = 1,
    FAILED = 2,
    WAITTINGADVERSE = 3
} statutPartie_t;

extern const char *statutPartieTxt[];

typedef struct 
{
  int id;
  statutPartie_t statut;
  adresse_t addrMaitre;
  adresse_t addrAdverse;
  int scoreMaitre;
  int scoreAdverse;

} statPartie_t;


void adresseTOstr(adresse_t *adr,char *dest);
void strTOadresse(adresse_t *adr,char *dest);

void reqTOstr(req_t *req,buffer_t buff);
void strTOreq(req_t *req,buffer_t buff);
void repTOstr(rep_t *req,buffer_t buff);
void strTOrep(rep_t *req,buffer_t buff);

#endif