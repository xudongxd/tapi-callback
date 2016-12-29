/*
 * runtime_callbacks.c
 *
 *  Created on: Aug 19, 2016
 *      Author: compila
 */

#include "runtime_callbacks.h"
#include "y_tapi-topology.h"


static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_layer_protocol_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_termination_direction (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_termination_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_local_id (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_name_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_name_value (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_client_node_edge_point (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_mapped_service_end_point (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_state_administrative_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_state_operational_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_state_lifecycle_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_termination_direction (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_link_port_direction (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_link_port_role (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_uuid (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_name_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_name_value (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_label_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_label_value (val_value_t *element);
static char* cb_get_runtime_network_topology_node_aggregated_node_edge_point (val_value_t *element);
static char* cb_get_runtime_network_topology_node_encap_topology (val_value_t *element);
static char* cb_get_runtime_network_topology_node_state_administrative_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_state_operational_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_state_lifecycle_state (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_total_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_packet_bw_profile_type (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_committed_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_committed_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_peak_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_peak_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_color_aware (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_coupling_flag (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_total_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_packet_bw_profile_type (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_committed_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_committed_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_peak_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_peak_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_color_aware (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_coupling_flag (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_total_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_color_aware (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_coupling_flag (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_interaction_algorithm (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_cost_cost_characteristic_cost_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_cost_cost_characteristic_cost_value (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_cost_cost_characteristic_cost_algorithm (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_integrity_error_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_integrity_loss_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_integrity_repeat_delivery_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_integrity_delivery_order_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_integrity_unavailable_time_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_integrity_server_integrity_process_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_fixed_latency_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_jitter_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_wander_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_traffic_property_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_traffic_property_queing_latency (val_value_t *element);
static char* cb_get_runtime_network_topology_node_layer_protocol_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_uuid (val_value_t *element);
static char* cb_get_runtime_network_topology_node_name_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_name_value (val_value_t *element);
static char* cb_get_runtime_network_topology_node_label_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_node_label_value (val_value_t *element);
static char* cb_get_runtime_network_topology_link_node_edge_point (val_value_t *element);
static char* cb_get_runtime_network_topology_link_node (val_value_t *element);
static char* cb_get_runtime_network_topology_link_state_administrative_state (val_value_t *element);
static char* cb_get_runtime_network_topology_link_state_operational_state (val_value_t *element);
static char* cb_get_runtime_network_topology_link_state_lifecycle_state (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_total_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_packet_bw_profile_type (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_committed_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_committed_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_peak_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_peak_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_color_aware (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_coupling_flag (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_total_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_packet_bw_profile_type (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_committed_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_committed_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_peak_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_peak_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_color_aware (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_coupling_flag (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_total_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_color_aware (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_coupling_flag (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_interaction_algorithm (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_cost_cost_characteristic_cost_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_cost_cost_characteristic_cost_value (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_cost_cost_characteristic_cost_algorithm (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_integrity_error_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_integrity_loss_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_integrity_repeat_delivery_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_integrity_delivery_order_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_integrity_unavailable_time_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_integrity_server_integrity_process_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_fixed_latency_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_jitter_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_wander_characteristic (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_traffic_property_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_traffic_property_queing_latency (val_value_t *element);
static char* cb_get_runtime_network_topology_link_risk_parameter_risk_characteristic_risk_characteristic_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_risk_parameter_risk_characteristic_risk_identifier_list (val_value_t *element);
static char* cb_get_runtime_network_topology_link_validation_validation_mechanism_validation_mechanism (val_value_t *element);
static char* cb_get_runtime_network_topology_link_validation_validation_mechanism_layer_protocol_adjacency_validated (val_value_t *element);
static char* cb_get_runtime_network_topology_link_validation_validation_mechanism_validation_robustness (val_value_t *element);
static char* cb_get_runtime_network_topology_link_lp_transition_transitioned_layer_protocol_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_lp_transition_node_edge_point (val_value_t *element);
static char* cb_get_runtime_network_topology_link_layer_protocol_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_direction (val_value_t *element);
static char* cb_get_runtime_network_topology_link_uuid (val_value_t *element);
static char* cb_get_runtime_network_topology_link_name_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_name_value (val_value_t *element);
static char* cb_get_runtime_network_topology_link_label_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_link_label_value (val_value_t *element);
static char* cb_get_runtime_network_topology_layer_protocol_name (val_value_t *element);
static char* cb_get_runtime_network_topology_uuid (val_value_t *element);
static char* cb_get_runtime_network_topology_name_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_name_value (val_value_t *element);
static char* cb_get_runtime_network_topology_label_value_name (val_value_t *element);
static char* cb_get_runtime_network_topology_label_value (val_value_t *element);





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















/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_layer_protocol_layer_protocol_name
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/layer-protocol/layer-protocol-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_layer_protocol_name (val_value_t *element)
{
    char *res = NULL;
    res = strdup("eth");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_layer_protocol_termination_direction
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/layer-protocol/termination-direction
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_termination_direction (val_value_t *element)
{
    char *res = NULL;
    res = strdup("bidirectional");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_layer_protocol_termination_state
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/layer-protocol/termination-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_termination_state (val_value_t *element)
{
    char *res = NULL;
    res = strdup("lp-can-never-terminate");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_layer_protocol_local_id
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/layer-protocol/local-id
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_local_id (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_layer_protocol_name_value_name
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/layer-protocol/name/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_name_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_layer_protocol_name_value
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/layer-protocol/name/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_name_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("axiba");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_client_node_edge_point
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/client-node-edge-point
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_client_node_edge_point (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_mapped_service_end_point
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/mapped-service-end-point
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_mapped_service_end_point (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_state_administrative_state
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/state/administrative-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_state_administrative_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_state_operational_state
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/state/operational-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_state_operational_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_state_lifecycle_state
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/state/lifecycle-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_state_lifecycle_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_termination_direction
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/termination-direction
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_termination_direction (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_link_port_direction
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/link-port-direction
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_link_port_direction (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_link_port_role
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/link-port-role
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_link_port_role (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_uuid
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/uuid
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_uuid (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_name_value_name
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/name/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_name_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_name_value
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/name/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_name_value (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_label_value_name
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/label/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_label_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_owned_node_edge_point_label_value
* 
* Get database object callback
* Path: /network-topology/node/owned-node-edge-point/label/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_owned_node_edge_point_label_value (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_aggregated_node_edge_point
* 
* Get database object callback
* Path: /network-topology/node/aggregated-node-edge-point
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_aggregated_node_edge_point (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_encap_topology
* 
* Get database object callback
* Path: /network-topology/node/encap-topology
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_encap_topology (val_value_t *element)
{
    char *res = NULL;
    res = strdup("topology_default");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_state_administrative_state
* 
* Get database object callback
* Path: /network-topology/node/state/administrative-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_state_administrative_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_state_operational_state
* 
* Get database object callback
* Path: /network-topology/node/state/operational-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_state_operational_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_state_lifecycle_state
* 
* Get database object callback
* Path: /network-topology/node/state/lifecycle-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_state_lifecycle_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_total_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/total-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_total_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_packet_bw_profile_type
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/packet-bw-profile-type
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_packet_bw_profile_type (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_committed_information_rate
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/committed-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_committed_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_committed_burst_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/committed-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_committed_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_peak_information_rate
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/peak-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_peak_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_peak_burst_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/peak-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_peak_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_color_aware
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/color-aware
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_color_aware (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_total_potential_capacity_coupling_flag
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/total-potential-capacity/coupling-flag
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_total_potential_capacity_coupling_flag (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_total_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/total-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_total_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_packet_bw_profile_type
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/packet-bw-profile-type
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_packet_bw_profile_type (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_committed_information_rate
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/committed-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_committed_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_committed_burst_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/committed-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_committed_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_peak_information_rate
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/peak-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_peak_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_peak_burst_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/peak-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_peak_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_color_aware
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/color-aware
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_color_aware (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_available_capacity_coupling_flag
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/available-capacity/coupling-flag
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_available_capacity_coupling_flag (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_total_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/total-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_total_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/packet-bw-profile-type
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type (val_value_t *element)
{
    char *res = NULL;
    res = strdup("rfc-2697");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/committed-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate (val_value_t *element)
{
    char *res = NULL;
    res = strdup("10000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/committed-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size (val_value_t *element)
{
    char *res = NULL;
    res = strdup("10000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/peak-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate (val_value_t *element)
{
    char *res = NULL;
    res = strdup("10000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/peak-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size (val_value_t *element)
{
    char *res = NULL;
    res = strdup("10000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_color_aware
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/color-aware
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_color_aware (val_value_t *element)
{
    char *res = NULL;
    res = strdup("false");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_coupling_flag
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-assigned-to-user-view/coupling-flag
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_coupling_flag (val_value_t *element)
{
    char *res = NULL;
    res = strdup("true");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_capacity_capacity_interaction_algorithm
* 
* Get database object callback
* Path: /network-topology/node/transfer-capacity/capacity-interaction-algorithm
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_capacity_capacity_interaction_algorithm (val_value_t *element)
{
    char *res = NULL;
    res = strdup("node_aaa");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_cost_cost_characteristic_cost_name
* 
* Get database object callback
* Path: /network-topology/node/transfer-cost/cost-characteristic/cost-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_cost_cost_characteristic_cost_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_cost_cost_characteristic_cost_value
* 
* Get database object callback
* Path: /network-topology/node/transfer-cost/cost-characteristic/cost-value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_cost_cost_characteristic_cost_value (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_cost_cost_characteristic_cost_algorithm
* 
* Get database object callback
* Path: /network-topology/node/transfer-cost/cost-characteristic/cost-algorithm
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_cost_cost_characteristic_cost_algorithm (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_integrity_error_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-integrity/error-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_integrity_error_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_integrity_loss_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-integrity/loss-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_integrity_loss_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_integrity_repeat_delivery_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-integrity/repeat-delivery-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_integrity_repeat_delivery_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_integrity_delivery_order_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-integrity/delivery-order-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_integrity_delivery_order_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_integrity_unavailable_time_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-integrity/unavailable-time-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_integrity_unavailable_time_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_integrity_server_integrity_process_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-integrity/server-integrity-process-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_integrity_server_integrity_process_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_timing_latency_characteristic_fixed_latency_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-timing/latency-characteristic/fixed-latency-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_fixed_latency_characteristic (val_value_t *element)
{
    char *res = NULL;
    res = strdup("fixed_latency");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_timing_latency_characteristic_jitter_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-timing/latency-characteristic/jitter-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_jitter_characteristic (val_value_t *element)
{
    char *res = NULL;
    res = strdup("jitter");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_timing_latency_characteristic_wander_characteristic
* 
* Get database object callback
* Path: /network-topology/node/transfer-timing/latency-characteristic/wander-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_wander_characteristic (val_value_t *element)
{
    char *res = NULL;
    res = strdup("wander");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_timing_latency_characteristic_traffic_property_name
* 
* Get database object callback
* Path: /network-topology/node/transfer-timing/latency-characteristic/traffic-property-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_traffic_property_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_transfer_timing_latency_characteristic_traffic_property_queing_latency
* 
* Get database object callback
* Path: /network-topology/node/transfer-timing/latency-characteristic/traffic-property-queing-latency
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_traffic_property_queing_latency (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_layer_protocol_name
* 
* Get database object callback
* Path: /network-topology/node/layer-protocol-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_layer_protocol_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_uuid
* 
* Get database object callback
* Path: /network-topology/node/uuid
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_uuid (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_name_value_name
* 
* Get database object callback
* Path: /network-topology/node/name/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_name_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_name_value
* 
* Get database object callback
* Path: /network-topology/node/name/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_name_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("name_value");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_label_value_name
* 
* Get database object callback
* Path: /network-topology/node/label/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_label_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_node_label_value
* 
* Get database object callback
* Path: /network-topology/node/label/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_node_label_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("label_value");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_node_edge_point
* 
* Get database object callback
* Path: /network-topology/link/node-edge-point
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_node_edge_point (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_node
* 
* Get database object callback
* Path: /network-topology/link/node
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_node (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_state_administrative_state
* 
* Get database object callback
* Path: /network-topology/link/state/administrative-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_state_administrative_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_state_operational_state
* 
* Get database object callback
* Path: /network-topology/link/state/operational-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_state_operational_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_state_lifecycle_state
* 
* Get database object callback
* Path: /network-topology/link/state/lifecycle-state
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_state_lifecycle_state (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_total_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/total-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_total_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_packet_bw_profile_type
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/packet-bw-profile-type
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_packet_bw_profile_type (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_committed_information_rate
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/committed-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_committed_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_committed_burst_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/committed-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_committed_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_peak_information_rate
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/peak-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_peak_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_peak_burst_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/peak-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_peak_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_color_aware
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/color-aware
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_color_aware (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_total_potential_capacity_coupling_flag
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/total-potential-capacity/coupling-flag
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_total_potential_capacity_coupling_flag (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_total_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/total-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_total_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_packet_bw_profile_type
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/packet-bw-profile-type
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_packet_bw_profile_type (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_committed_information_rate
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/committed-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_committed_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_committed_burst_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/committed-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_committed_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_peak_information_rate
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/peak-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_peak_information_rate (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_peak_burst_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/peak-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_peak_burst_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_color_aware
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/color-aware
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_color_aware (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_available_capacity_coupling_flag
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/available-capacity/coupling-flag
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_available_capacity_coupling_flag (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_total_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/total-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_total_size (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/packet-bw-profile-type
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type (val_value_t *element)
{
    char *res = NULL;
    res = strdup("rfc-2697");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/committed-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate (val_value_t *element)
{
    char *res = NULL;
    res = strdup("10000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/committed-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size (val_value_t *element)
{
    char *res = NULL;
    res = strdup("1000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/peak-information-rate
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate (val_value_t *element)
{
    char *res = NULL;
    res = strdup("100000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/peak-burst-size
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size (val_value_t *element)
{
    char *res = NULL;
    res = strdup("2000");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_color_aware
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/color-aware
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_color_aware (val_value_t *element)
{
    char *res = NULL;
    res = strdup("true");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_coupling_flag
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-assigned-to-user-view/coupling-flag
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_coupling_flag (val_value_t *element)
{
    char *res = NULL;
    res = strdup("false");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_capacity_capacity_interaction_algorithm
* 
* Get database object callback
* Path: /network-topology/link/transfer-capacity/capacity-interaction-algorithm
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_capacity_capacity_interaction_algorithm (val_value_t *element)
{
    char *res = NULL;
    res = strdup("link_aaa");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_cost_cost_characteristic_cost_name
* 
* Get database object callback
* Path: /network-topology/link/transfer-cost/cost-characteristic/cost-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_cost_cost_characteristic_cost_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_cost_cost_characteristic_cost_value
* 
* Get database object callback
* Path: /network-topology/link/transfer-cost/cost-characteristic/cost-value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_cost_cost_characteristic_cost_value (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_cost_cost_characteristic_cost_algorithm
* 
* Get database object callback
* Path: /network-topology/link/transfer-cost/cost-characteristic/cost-algorithm
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_cost_cost_characteristic_cost_algorithm (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_integrity_error_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-integrity/error-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_integrity_error_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_integrity_loss_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-integrity/loss-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_integrity_loss_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_integrity_repeat_delivery_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-integrity/repeat-delivery-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_integrity_repeat_delivery_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_integrity_delivery_order_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-integrity/delivery-order-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_integrity_delivery_order_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_integrity_unavailable_time_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-integrity/unavailable-time-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_integrity_unavailable_time_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_integrity_server_integrity_process_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-integrity/server-integrity-process-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_integrity_server_integrity_process_characteristic (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_timing_latency_characteristic_fixed_latency_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-timing/latency-characteristic/fixed-latency-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_fixed_latency_characteristic (val_value_t *element)
{
    char *res = NULL;
    res = strdup("fixed_latency");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_timing_latency_characteristic_jitter_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-timing/latency-characteristic/jitter-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_jitter_characteristic (val_value_t *element)
{
    char *res = NULL;
    res = strdup("jitter");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_timing_latency_characteristic_wander_characteristic
* 
* Get database object callback
* Path: /network-topology/link/transfer-timing/latency-characteristic/wander-characteristic
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_wander_characteristic (val_value_t *element)
{
    char *res = NULL;
    res = strdup("wander");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_timing_latency_characteristic_traffic_property_name
* 
* Get database object callback
* Path: /network-topology/link/transfer-timing/latency-characteristic/traffic-property-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_traffic_property_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_transfer_timing_latency_characteristic_traffic_property_queing_latency
* 
* Get database object callback
* Path: /network-topology/link/transfer-timing/latency-characteristic/traffic-property-queing-latency
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_traffic_property_queing_latency (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_risk_parameter_risk_characteristic_risk_characteristic_name
* 
* Get database object callback
* Path: /network-topology/link/risk-parameter/risk-characteristic/risk-characteristic-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_risk_parameter_risk_characteristic_risk_characteristic_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_risk_parameter_risk_characteristic_risk_identifier_list
* 
* Get database object callback
* Path: /network-topology/link/risk-parameter/risk-characteristic/risk-identifier-list
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_risk_parameter_risk_characteristic_risk_identifier_list (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_validation_validation_mechanism_validation_mechanism
* 
* Get database object callback
* Path: /network-topology/link/validation/validation-mechanism/validation-mechanism
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_validation_validation_mechanism_validation_mechanism (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_validation_validation_mechanism_layer_protocol_adjacency_validated
* 
* Get database object callback
* Path: /network-topology/link/validation/validation-mechanism/layer-protocol-adjacency-validated
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_validation_validation_mechanism_layer_protocol_adjacency_validated (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_validation_validation_mechanism_validation_robustness
* 
* Get database object callback
* Path: /network-topology/link/validation/validation-mechanism/validation-robustness
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_validation_validation_mechanism_validation_robustness (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_lp_transition_transitioned_layer_protocol_name
* 
* Get database object callback
* Path: /network-topology/link/lp-transition/transitioned-layer-protocol-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_lp_transition_transitioned_layer_protocol_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_lp_transition_node_edge_point
* 
* Get database object callback
* Path: /network-topology/link/lp-transition/node-edge-point
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_lp_transition_node_edge_point (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_layer_protocol_name
* 
* Get database object callback
* Path: /network-topology/link/layer-protocol-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_layer_protocol_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_direction
* 
* Get database object callback
* Path: /network-topology/link/direction
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_direction (val_value_t *element)
{
    char *res = NULL;
    res = strdup("bidirectional");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_uuid
* 
* Get database object callback
* Path: /network-topology/link/uuid
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_uuid (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_name_value_name
* 
* Get database object callback
* Path: /network-topology/link/name/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_name_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_name_value
* 
* Get database object callback
* Path: /network-topology/link/name/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_name_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("link_name_value");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_label_value_name
* 
* Get database object callback
* Path: /network-topology/link/label/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_label_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_link_label_value
* 
* Get database object callback
* Path: /network-topology/link/label/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_link_label_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("link_label_value");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_layer_protocol_name
* 
* Get database object callback
* Path: /network-topology/layer-protocol-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_layer_protocol_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_uuid
* 
* Get database object callback
* Path: /network-topology/uuid
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_uuid (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_name_value_name
* 
* Get database object callback
* Path: /network-topology/name/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_name_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_name_value
* 
* Get database object callback
* Path: /network-topology/name/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_name_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("name_value");
    return res;
}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_label_value_name
* 
* Get database object callback
* Path: /network-topology/label/value-name
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_label_value_name (val_value_t *element)
{

}

/********************************************************************
* FUNCTION u_tapi_topology_network_topology_label_value
* 
* Get database object callback
* Path: /network-topology/label/value
* 
* INPUTS:
*     val_value_t *element - the element for which we want the value
* 
* RETURNS:
*     The value of the element, represented as a string
********************************************************************/
static char* cb_get_runtime_network_topology_label_value (val_value_t *element)
{
    char *res = NULL;
    res = strdup("label_value");
    return res;
}







char* cb_get_runtime_element_value(val_value_t *element, const char* moduleName)
{
    if(!element)
        return NULL;

	//tapi_topology

	if (strcmp(moduleName, y_tapi_topology_M_tapi_topology) == 0)
	{
        if(element->parent && strcmp(element->parent->name, y_tapi_topology_N_network_topology) == 0)
        {
            return NULL;
        }
        else if(element->parent->parent && strcmp(element->parent->parent->name, y_tapi_topology_N_network_topology) == 0)
        {
            //link
            if(strcmp(element->parent->name, y_tapi_topology_N_link) == 0)
            {
                //link/direction
                if (strcmp(element->name, y_tapi_topology_N_direction) == 0)
                {
                    return cb_get_runtime_network_topology_link_direction(element);
                }
            }
            //node
            if(strcmp(element->parent->name, y_tapi_topology_N_node) == 0)
            {
                //node/encap-topology
                if (strcmp(element->name, y_tapi_topology_N_encap_topology) == 0)
                {
                    return cb_get_runtime_network_topology_node_encap_topology(element);
                }
            }
            //name
            if(strcmp(element->parent->name, y_tapi_topology_N_name) == 0)
            {
                //name/value
                if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                {
                    return cb_get_runtime_network_topology_name_value(element);
                }
            }
            //label
            if(strcmp(element->parent->name, y_tapi_topology_N_label) == 0)
            {
                //label/value
                if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                {
                    return cb_get_runtime_network_topology_label_value(element);
                }
            }
            return NULL;
        }
        else if(element->parent->parent->parent && strcmp(element->parent->parent->parent->name, y_tapi_topology_N_network_topology) == 0)
        {
            //link
            if(strcmp(element->parent->parent->name, y_tapi_topology_N_link) == 0)
            {
                //link/transfer-capacity
                if (strcmp(element->parent->name, y_tapi_topology_N_transfer_capacity) == 0)
                {
                    //link/transfer-capacity/capacity-interaction-algorithm
                    if (strcmp(element->name, y_tapi_topology_N_capacity_interaction_algorithm) == 0)
                    {
                        return cb_get_runtime_network_topology_link_transfer_capacity_capacity_interaction_algorithm(element);
                    }
                }
                //link/name
                if(strcmp(element->parent->name, y_tapi_topology_N_name) == 0)
                {
                    //link/name/value
                    if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                    {
                        return cb_get_runtime_network_topology_link_name_value(element);
                    }
                }
                //link/label
                if(strcmp(element->parent->name, y_tapi_topology_N_label) == 0)
                {
                    //link/label/value
                    if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                    {
                        return cb_get_runtime_network_topology_link_label_value(element);
                    }
                }
            }
            //node
            if(strcmp(element->parent->parent->name, y_tapi_topology_N_node) == 0)
            {
                //node/transfer-capacity
                if (strcmp(element->parent->name, y_tapi_topology_N_transfer_capacity) == 0)
                {
                    //node/transfer-capacity/capacity-interaction-algorithm
                    if (strcmp(element->name, y_tapi_topology_N_capacity_interaction_algorithm) == 0)
                    {
                        return cb_get_runtime_network_topology_node_transfer_capacity_capacity_interaction_algorithm(element);
                    }
                }
                //node/name
                if(strcmp(element->parent->name, y_tapi_topology_N_name) == 0)
                {
                    //node/name/value
                    if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                    {
                        return cb_get_runtime_network_topology_node_name_value(element);
                    }
                }
                //node/label
                if(strcmp(element->parent->name, y_tapi_topology_N_label) == 0)
                {
                    //node/label/value
                    if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                    {
                        return cb_get_runtime_network_topology_node_label_value(element);
                    }
                }
            }
            return NULL;
        }
        else if(element->parent->parent->parent->parent && strcmp(element->parent->parent->parent->parent->name, y_tapi_topology_N_network_topology) == 0)
        {
            //link
            if(strcmp(element->parent->parent->parent->name, y_tapi_topology_N_link) == 0)
            {
                //link/transfer-capacity
                if (strcmp(element->parent->parent->name, y_tapi_topology_N_transfer_capacity) == 0)
                {
                    //link/transfer-capacity/capacity-assigned-to-user-view
                    if (strcmp(element->parent->name, y_tapi_topology_N_capacity_assigned_to_user_view) == 0)
                    {
                        if (strcmp(element->name, y_tapi_topology_N_packet_bw_profile_type) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_committed_information_rate) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_committed_burst_size) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_peak_information_rate) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_peak_burst_size) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_color_aware) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_color_aware(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_coupling_flag) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_capacity_capacity_assigned_to_user_view_coupling_flag(element);
                        }
                    }
                }
                //link/transfer-timing
                if (strcmp(element->parent->parent->name, y_tapi_topology_N_transfer_timing) == 0)
                {
                    //link/transfer-timing/latency-characteristic
                    if (strcmp(element->parent->name, y_tapi_topology_N_latency_characteristic) == 0)
                    {
                        if (strcmp(element->name, y_tapi_topology_N_fixed_latency_characteristic) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_fixed_latency_characteristic(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_jitter_characteristic) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_jitter_characteristic(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_wander_characteristic) == 0)
                        {
                            return cb_get_runtime_network_topology_link_transfer_timing_latency_characteristic_wander_characteristic(element);
                        }
                    }
                }
            }
            //node
            if(strcmp(element->parent->parent->parent->name, y_tapi_topology_N_node) == 0)
            {
                //node/transfer-capacity
                if (strcmp(element->parent->parent->name, y_tapi_topology_N_transfer_capacity) == 0)
                {
                    //node/transfer-capacity/capacity-assigned-to-user-view
                    if (strcmp(element->parent->name, y_tapi_topology_N_capacity_assigned_to_user_view) == 0)
                    {
                        if (strcmp(element->name, y_tapi_topology_N_packet_bw_profile_type) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_packet_bw_profile_type(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_committed_information_rate) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_information_rate(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_committed_burst_size) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_committed_burst_size(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_peak_information_rate) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_information_rate(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_peak_burst_size) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_peak_burst_size(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_color_aware) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_color_aware(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_coupling_flag) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_capacity_capacity_assigned_to_user_view_coupling_flag(element);
                        }
                    }
                }
                //node/transfer-timing
                if (strcmp(element->parent->parent->name, y_tapi_topology_N_transfer_timing) == 0)
                {
                    //node/transfer-timing/latency-characteristic
                    if (strcmp(element->parent->name, y_tapi_topology_N_latency_characteristic) == 0)
                    {
                        if (strcmp(element->name, y_tapi_topology_N_fixed_latency_characteristic) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_fixed_latency_characteristic(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_jitter_characteristic) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_jitter_characteristic(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_wander_characteristic) == 0)
                        {
                            return cb_get_runtime_network_topology_node_transfer_timing_latency_characteristic_wander_characteristic(element);
                        }
                    }
                }
                //node/owned-node-edge-point
                if (strcmp(element->parent->parent->name, y_tapi_topology_N_owned_node_edge_point) == 0)
                {
                    //node/owned-node-edge-point/layer-protocol
                    if (strcmp(element->parent->name, y_tapi_topology_N_layer_protocol) == 0)
                    {
                        if (strcmp(element->name, y_tapi_topology_N_layer_protocol_name) == 0)
                        {
                            return cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_layer_protocol_name(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_termination_direction) == 0)
                        {
                            return cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_termination_direction(element);
                        }
                        if (strcmp(element->name, y_tapi_topology_N_termination_state) == 0)
                        {
                            return cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_termination_state(element);
                        }
                    }
                }
            }
            return NULL;
        }
        else if(element->parent->parent->parent->parent->parent && strcmp(element->parent->parent->parent->parent->parent->name, y_tapi_topology_N_network_topology) == 0)
        {
            //node
            if(strcmp(element->parent->parent->parent->parent->name, y_tapi_topology_N_node) == 0)
            {
                //node/owned-node-edge-point
                if (strcmp(element->parent->parent->parent->name, y_tapi_topology_N_owned_node_edge_point) == 0)
                {
                    //node/owned-node-edge-point/layer-protocol
                    if (strcmp(element->parent->parent->name, y_tapi_topology_N_layer_protocol) == 0)
                    {
                        //node/owned-node-edge-point/layer-protocol/name
                        if (strcmp(element->parent->name, y_tapi_topology_N_name) == 0)
                        {
                            if (strcmp(element->name, y_tapi_topology_N_value) == 0)
                            {
                                return cb_get_runtime_network_topology_node_owned_node_edge_point_layer_protocol_name_value(element);
                            }
                        }
                    }
                }
            }
        }
    }

    return NULL;
}
