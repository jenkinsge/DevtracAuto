<?php
/**
 * @file api.php Contains the documentation about the different APIs
 */
 /**  
 * @defgroup devtrac_api Devtrac API
 * @{
 * For those who would like to build a mobile application there is an API available
 * based on the services module. This API is used by the 
 * @link https://github.com/davidebukali/DevtracMobile Devtrac Mobile @endlink client.
 *
 * There is also an API that allows data to be published into any CKAN installation. CKAN
 * then  has an API to interacti directly with the data.
 *
 * @see devtrac_services_api
 * @see ckan_api
  *@}
 */
 
 /* @defgroup devtrac_services_api Services API
  * @{
  * If you want to build an application that interacts with Devtrac in a very direct
  * and authenticated way, this is the API you would like to use.
  * 
  * The main configuration for this functionality is in the devtrac7_services_api feature
  * and the devtrac7_views_views_pre_view 
  * 
  * More information on how to use this API can be found in the tutorial section
  * on the @link http://www.devtrac.org/node/20 website @endlink
  * 
  * @see devtrac7_services_api_default_services_endpoint
  * @}
  */

 /* @defgroup devtrac_ckan_api Services API
 * @{
 * The CKAN API allows you to harvest Devtrac data into CKAN.
  * @}
  */
