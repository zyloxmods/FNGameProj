#include "FortCustomizableAbilityDecoTool.h"

void AFortCustomizableAbilityDecoTool::ServerReleaseTrigger_Implementation() {
}
bool AFortCustomizableAbilityDecoTool::ServerReleaseTrigger_Validate() {
    return true;
}

void AFortCustomizableAbilityDecoTool::ServerReleaseSecondaryFire_Implementation() {
}
bool AFortCustomizableAbilityDecoTool::ServerReleaseSecondaryFire_Validate() {
    return true;
}

void AFortCustomizableAbilityDecoTool::ServerPressTrigger_Implementation() {
}
bool AFortCustomizableAbilityDecoTool::ServerPressTrigger_Validate() {
    return true;
}

void AFortCustomizableAbilityDecoTool::ServerPressSecondaryFire_Implementation() {
}
bool AFortCustomizableAbilityDecoTool::ServerPressSecondaryFire_Validate() {
    return true;
}

void AFortCustomizableAbilityDecoTool::ExecuteDecoAbility() {
}

void AFortCustomizableAbilityDecoTool::BPServerReleaseSecondaryFire() {
}

void AFortCustomizableAbilityDecoTool::BPServerPressSecondaryFire() {
}

void AFortCustomizableAbilityDecoTool::BPReleaseTrigger_Implementation(AFortDecoHelper* FortDecoHelper) {
}

void AFortCustomizableAbilityDecoTool::BPReleaseSecondaryFire_Implementation(AFortDecoHelper* FortDecoHelper) {
}

void AFortCustomizableAbilityDecoTool::BPPressTrigger_Implementation(AFortDecoHelper* FortDecoHelper) {
}

void AFortCustomizableAbilityDecoTool::BPPressSecondaryFire_Implementation(AFortDecoHelper* FortDecoHelper) {
}




AFortCustomizableAbilityDecoTool::AFortCustomizableAbilityDecoTool() {
    bExecuteToolAbilityOnPress = false;
}

