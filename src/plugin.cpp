// SynTHBloK-MorphFilter: registers this plugin's modules.
#include "plugin.hpp"

Plugin* pluginInstance;

extern Model* modelNoizeeFlagshipFilter;

void init(Plugin* p) {
    pluginInstance = p;
    p->addModel(modelNoizeeFlagshipFilter);
}
