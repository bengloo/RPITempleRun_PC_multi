#ifndef REQREP_H
    #define REQREP_H
    #include "reqRep.h"
#endif
#define ADDRSERVERENR "127.0.0.1"
#define PORT_SVC 5000 

#ifdef SERVER
    //-fct generation des requétes
    void createPartieRep();
    void getPartiesRep();
    //-à chaque req ,on associera &fct de traitement qui genere une réponse
    void newpartieServ();
    void getparties();
    //1 fct de selection traitement selon requete
    void lireReqServ(req_t req);
#endif
#ifdef CLIENT
    //-fct generation des requétes
    void createPartyReq(req_t *req);
    void getPartiesReq();
    void joinPartieReq();
    void joinPartieRep();
    void startReq();
    void startRep();
    void UpdateStatutPlayerReq();
    void updateStatutPlayerRep();
    //-à chaque req ,on associera &fct de traitement qui genere une réponse
    void waitParties();
    void afficherParties();
    void initPartie();
    void getStart();
    void partieMaitre();
    void partieAdverse();
    void updateStatutPlayerMaitre();
    void updateStatutPlayerInvite();
    void stream();
    void afficherStream();
    //1 fct de selection traitement selon requete
    void lireReqClient(req_t req);
#endif

