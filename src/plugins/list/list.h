/**
 * @file
 *
 * @brief Header for list plugin
 *
 * @copyright BSD License (see LICENSE.md or https://www.libelektra.org)
 *
 */

#ifndef ELEKTRA_PLUGIN_LIST_H
#define ELEKTRA_PLUGIN_LIST_H

#include <kdbioplugin.h>
#include <kdbnotificationinternal.h>
#include <kdbplugin.h>

int elektraListOpen (Plugin * handle, Key * errorKey);
int elektraListClose (Plugin * handle, Key * errorKey);
int elektraListGet (Plugin * handle, KeySet * ks, Key * parentKey);
int elektraListSet (Plugin * handle, KeySet * ks, Key * parentKey);
int elektraListError (Plugin * handle, KeySet * ks, Key * parentKey);
int elektraListAddPlugin (Plugin * handle, KeySet * pluginConfig);
int elektraListEditPlugin (Plugin * handle, KeySet * pluginConfig);

Plugin * ELEKTRA_PLUGIN_EXPORT (list);

#endif
