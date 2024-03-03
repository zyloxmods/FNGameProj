#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortSettingRegistry.generated.h"

class UFortSetting;

UCLASS(Abstract, Blueprintable)
class UFortSettingRegistry : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSetting*> TopLevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSetting*> RegisteredSettings;
    
public:
    UFortSettingRegistry();
};

