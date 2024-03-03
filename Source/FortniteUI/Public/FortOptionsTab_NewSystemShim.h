#pragma once
#include "CoreMinimal.h"
#include "FortOptionsTab.h"
#include "FortOptionsTab_NewSystemShim.generated.h"

class UFortGameSettingRegistry;
class UFortSettingsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortOptionsTab_NewSystemShim : public UFortOptionsTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingsPanel* Settings_Panel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGameSettingRegistry* Registry;
    
public:
    UFortOptionsTab_NewSystemShim();
    UFUNCTION(BlueprintCallable)
    bool AttemptToPopNavigation();
    
};

