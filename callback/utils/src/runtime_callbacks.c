/*
 * runtime_callbacks.c
 *
 *  Created on: Aug 19, 2016
 *      Author: compila
 */

#include "runtime_callbacks.h"

#define SETKEY(key, cnt) \
({ \
    *num = 0; \
    for(int i=0; i<cnt; i++) \
    { \
        char sequenceNumber[256]; \
        strcpy(sequenceNumber, key); \
        key_list[*num] = (char*) malloc(strlen(sequenceNumber) + 1); \
        YUMA_ASSERT(key_list[*num] == NULL, return ERR_INTERNAL_MEM, "Could not allocate memory!"); \
        strcpy(key_list[*num], sequenceNumber); \
        *num += 1; \
    } \
    return NO_ERR; \
})

/********************************************************************
* FUNCTION cb_get_all_network_topologies
*
* Get an array representing the keys of network-topology list
*
* INPUTS:
* null
* OUTPUTS:
* char** key_list - an array of strings containing the list of keys
* int* num - the number of keys found on the interface
*
* RETURNS:
*     error status
********************************************************************/
status_t cb_get_all_network_topologies(char **key_list, int *num)
{
    SETKEY("topology_default", 1);
}

/********************************************************************
* FUNCTION cb_get_all_links
*
* Get an array representing the keys of link list
*
* INPUTS:
* null
* OUTPUTS:
* char** key_list - an array of strings containing the list of keys
* int* num - the number of keys found on the interface
*
* RETURNS:
*     error status
********************************************************************/
status_t cb_get_all_links(char *topology_uuid, char **key_list, int *num)
{
    SETKEY("link_default", 1);
}

status_t cb_get_all_link_node_edge_points(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("link_node_edge_point_default", 1);
}

status_t cb_get_all_link_nodes(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("link_node_default", 1);
}

status_t cb_get_all_link_layer_protocol_names(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("och", 1);
}

status_t cb_get_all_link_names(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("link_name_default", 1);
}

status_t cb_get_all_link_labels(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("link_label_default", 1);
}

status_t cb_get_all_link_transfer_capacity_capacity_assigned_to_user_views(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("10gbps",1);
}

status_t cb_get_all_link_transfer_cost_cost_characteristics(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("name value algorithm",1);
}

status_t cb_get_all_link_transfer_timing_latency_characteristics(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("name queing_latency",1);
}

status_t cb_get_all_link_risk_parameter_risk_characteristics(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("risk_characteristic_default",1);
}

status_t cb_get_all_link_validation_validation_mechanisms(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("validation mechanism default",1);
}

status_t cb_get_all_link_lp_transition_transitioned_layer_protocol_names(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("och",1);
}

status_t cb_get_all_link_lp_transition_node_edge_points(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("lp_transition_node_edge_point_default",1);
} 

status_t cb_get_all_link_risk_parameter_risk_characteristic_risk_identifiers(char *topology_uuid, char *link_uuid ,char *risk_parameter_name,
        char **key_list, int *num)
{
    SETKEY("risk_identifier_default",1);
}


/********************************************************************
* FUNCTION cb_get_all_nodes
*
* Get an array representing the keys of node list
*
* INPUTS:
* null
* OUTPUTS:
* char** key_list - an array of strings containing the list of keys
* int* num - the number of keys found on the interface
*
* RETURNS:
*     error status
********************************************************************/
status_t cb_get_all_nodes(char *topology_uuid, char **key_list, int *num)
{
    SETKEY("node_default", 1);
}

status_t cb_get_all_node_owned_node_edge_points(char *topology_uuid, char *node_uuid, char **key_list, int *num)
{
    SETKEY("owned_node_edge_point_default", 1);
}

status_t cb_get_all_node_aggregated_node_edge_points(char *topology_uuid, char *node_uuid, char **key_list, int *num)
{
    SETKEY("owned_node_edge_point_default", 1);
}

status_t cb_get_all_node_layer_protocol_names(char *topology_uuid, char *node_uuid, char **key_list, int *num)
{
    SETKEY("och", 1);
}

status_t cb_get_all_node_names(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("node_name_default", 1);
}

status_t cb_get_all_node_labels(char *topology_uuid, char *link_uuid, char **key_list, int *num)
{
    SETKEY("node_label_default", 1);
}

status_t cb_get_all_node_owned_node_edge_point_client_node_edge_points(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char **key_list, int *num)
{
    SETKEY("client_node_edge_point_default", 1);
}

status_t cb_get_all_node_owned_node_edge_point_layer_protocols(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char **key_list, int *num)
{
    SETKEY("layer_protocols_default", 1);
}

status_t cb_get_all_node_owned_node_edge_point_layer_protocol_names(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char *layer_protocol_local_id, char **key_list, int *num)
{
    SETKEY("name_default", 1);
}

status_t cb_get_all_node_owned_node_edge_point_mapped_service_end_points(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char **key_list, int *num)
{
    SETKEY("mapped_service_end_point_default", 1);
}

status_t cb_get_all_node_transfer_capacity_capacity_assigned_to_user_views(char *topology_uuid, char *node_uuid, char **key_list, int *num)
{
    SETKEY("10gbps",1);
}

status_t cb_get_all_node_transfer_cost_cost_characteristics(char *topology_uuid, char *node_uuid, char **key_list, int *num)
{
    SETKEY("name value algorithm",1);
}

status_t cb_get_all_node_transfer_timing_latency_characteristics(char *topology_uuid, char *node_uuid, char **key_list, int *num)
{
    SETKEY("name queing_latency",1);
}


/********************************************************************
* FUNCTION cb_get_all_layer_protocol_names
*
* Get an array representing the keys of layer_protocol_name list
*
* INPUTS:
* null
* OUTPUTS:
* char** key_list - an array of strings containing the list of keys
* int* num - the number of keys found on the interface
*
* RETURNS:
*     error status
********************************************************************/
status_t cb_get_all_layer_protocol_names(char *topology_uuid, char **key_list, int *num)
{
    SETKEY("och", 1);
}


/********************************************************************
* FUNCTION cb_get_all_names
*
* Get an array representing the keys of name list
*
* INPUTS:
* null
* OUTPUTS:
* char** key_list - an array of strings containing the list of keys
* int* num - the number of keys found on the interface
*
* RETURNS:
*     error status
********************************************************************/
status_t cb_get_all_names(char *topology_uuid, char **key_list, int *num)
{
    SETKEY("name", 1);
}


/********************************************************************
* FUNCTION cb_get_all_labels
*
* Get an array representing the keys of label list
*
* INPUTS:
* null
* OUTPUTS:
* char** key_list - an array of strings containing the list of keys
* int* num - the number of keys found on the interface
*
* RETURNS:
*     error status
********************************************************************/
status_t cb_get_all_labels(char *topology_uuid, char **key_list, int *num)
{
    SETKEY("label", 1);
}
