#include <iostream>
#include <string>
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>


int main(){

    netsnmp_session session, *ss;
    netsnmp_pdu *pdu;
    netsnmp_pdu *response;

    oid anOID[MAX_OID_LEN];
    size_t anOID_len;

    netsnmp_variable_list *vars;
    int status;
    int count=1;

    char *host = "0.0.0.0";

    /*
     * Initialize the SNMP library
     */
    init_snmp("snmpdemoapp");

    session.version = SNMP_VERSION_2c;
    session.peername = host;
    session.community = "public";
    session.community_len = strlen(session.community);


}