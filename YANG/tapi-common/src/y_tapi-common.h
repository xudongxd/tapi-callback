
#ifndef _H_y_tapi_common
#define _H_y_tapi_common
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    Yuma SIL header
    module tapi-common
    revision 2016-12-15
    namespace urn:onf:params:xml:ns:yang:TapiCommon
    organization Open Networking Foundation (ONF) / Open Transport Working Group(OTWG) / Transport API (TAPI) Project

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_tapi_common_M_tapi_common (const xmlChar *)"tapi-common"
#define y_tapi_common_R_tapi_common (const xmlChar *)"2016-12-15"

#define y_tapi_common_N_connection (const xmlChar *)"connection"
#define y_tapi_common_N_connectivity_service (const xmlChar *)"connectivity-service"
#define y_tapi_common_N_context (const xmlChar *)"context"
#define y_tapi_common_N_direction (const xmlChar *)"direction"
#define y_tapi_common_N_extensions (const xmlChar *)"extensions"
#define y_tapi_common_N_get_service_end_point_details (const xmlChar *)"get-service-end-point-details"
#define y_tapi_common_N_get_service_end_point_list (const xmlChar *)"get-service-end-point-list"
#define y_tapi_common_N_label (const xmlChar *)"label"
#define y_tapi_common_N_layer_protocol (const xmlChar *)"layer-protocol"
#define y_tapi_common_N_layer_protocol_name (const xmlChar *)"layer-protocol-name"
#define y_tapi_common_N_lifecycle_state (const xmlChar *)"lifecycle-state"
#define y_tapi_common_N_local_id (const xmlChar *)"local-id"
#define y_tapi_common_N_name (const xmlChar *)"name"
#define y_tapi_common_N_notif_subscription (const xmlChar *)"notif-subscription"
#define y_tapi_common_N_notification (const xmlChar *)"notification"
#define y_tapi_common_N_nw_topology_service (const xmlChar *)"nw-topology-service"
#define y_tapi_common_N_path (const xmlChar *)"path"
#define y_tapi_common_N_path_comp_service (const xmlChar *)"path-comp-service"
#define y_tapi_common_N_service_end_point (const xmlChar *)"service-end-point"
#define y_tapi_common_N_service_epid_or_name (const xmlChar *)"service-epid-or-name"
#define y_tapi_common_N_state (const xmlChar *)"state"
#define y_tapi_common_N_termination_direction (const xmlChar *)"termination-direction"
#define y_tapi_common_N_termination_state (const xmlChar *)"termination-state"
#define y_tapi_common_N_topology (const xmlChar *)"topology"
#define y_tapi_common_N_uuid (const xmlChar *)"uuid"
#define y_tapi_common_N_value (const xmlChar *)"value"
#define y_tapi_common_N_value_name (const xmlChar *)"value-name"
#define y_tapi_common_N_virtual_nw_service (const xmlChar *)"virtual-nw-service"
/********************************************************************
* FUNCTION y_tapi_common_init
* 
* initialize the tapi-common server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_tapi_common_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION y_tapi_common_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_tapi_common_init2 (void);

/********************************************************************
* FUNCTION y_tapi_common_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_tapi_common_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif