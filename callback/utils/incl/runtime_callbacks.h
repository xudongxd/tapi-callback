/*
 *  runtime_callbacks.h
 *  Created on: Dec 22, 2016
 *  Author: zte
 */

#ifndef RUNTIME_CALLBACKS_H_
#define RUNTIME_CALLBACKS_H_

#include "status.h"
#include "val.h"
#include "utils.h"

status_t cb_get_all_network_topologies(char **key_list, int *num);

status_t cb_get_all_links(char *topology_uuid, char **key_list, int *num);
status_t cb_get_all_link_node_edge_points(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_nodes(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_layer_protocol_names(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_names(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_labels(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_transfer_capacity_capacity_assigned_to_user_views(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_transfer_cost_cost_characteristics(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_transfer_timing_latency_characteristics(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_risk_parameter_risk_characteristics(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_validation_validation_mechanisms(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_lp_transition_transitioned_layer_protocol_names(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_lp_transition_node_edge_points(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_link_risk_parameter_risk_characteristic_risk_identifiers(char *topology_uuid, char *link_uuid ,char *risk_parameter_name,
        char **key_list, int *num);

status_t cb_get_all_nodes(char *topology_uuid, char **key_list, int *num);
status_t cb_get_all_node_owned_node_edge_points(char *topology_uuid, char *node_uuid, char **key_list, int *num);
status_t cb_get_all_node_owned_node_edge_point_layer_protocols(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char **key_list, int *num);
status_t cb_get_all_node_owned_node_edge_point_layer_protocol_names(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char *layer_protocol_local_id, char **key_list, int *num);
status_t cb_get_all_node_aggregated_node_edge_points(char *topology_uuid, char *node_uuid, char **key_list, int *num);
status_t cb_get_all_node_layer_protocol_names(char *topology_uuid, char *node_uuid, char **key_list, int *num);
status_t cb_get_all_node_names(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_node_labels(char *topology_uuid, char *link_uuid, char **key_list, int *num);
status_t cb_get_all_node_owned_node_edge_point_client_node_edge_points(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char **key_list, int *num);
status_t cb_get_all_node_owned_node_edge_point_mapped_service_end_points(char *topology_uuid, char *node_uuid, char *owned_node_edge_point_uuid,
        char **key_list, int *num);
status_t cb_get_all_node_transfer_capacity_capacity_assigned_to_user_views(char *topology_uuid, char *node_uuid, char **key_list, int *num);
status_t cb_get_all_node_transfer_cost_cost_characteristics(char *topology_uuid, char *node_uuid, char **key_list, int *num);
status_t cb_get_all_node_transfer_timing_latency_characteristics(char *topology_uuid, char *node_uuid, char **key_list, int *num);

status_t cb_get_all_layer_protocol_names(char *topology_uuid, char **key_list, int *num);

status_t cb_get_all_names(char *topology_uuid, char **key_list, int *num);

status_t cb_get_all_labels(char *topology_uuid, char **key_list, int *num);



char* cb_get_runtime_element_value(val_value_t *element, const char* moduleName);

char* cb_get_runtime_node_state_value(val_value_t *element);
char* cb_get_runtime_node_transfer_integrity_value(val_value_t *element);
char* cb_get_runtime_node_owned_node_edge_point_state_value(val_value_t *element);
char* cb_get_runtime_node_transfer_capacity_total_potential_capacity_value(val_value_t *element);
char* cb_get_runtime_node_transfer_capacity_available_capacity_value(val_value_t *element);
char* cb_get_runtime_link_state_value(val_value_t *element);
char* cb_get_runtime_link_transfer_integrity_value(val_value_t *element);
char* cb_get_runtime_link_transfer_capacity_total_potential_capacity_value(val_value_t *element);
char* cb_get_runtime_link_transfer_capacity_available_capacity_value(val_value_t *element);

#endif /* RUNTIME_CALLBACKS_H_ */
