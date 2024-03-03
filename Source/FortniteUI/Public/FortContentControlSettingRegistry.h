#pragma once
#include "CoreMinimal.h"
#include "FortSettingRegistry.h"
#include "FortContentControlSettingRegistry.generated.h"

class UFortSettingCollection;

UCLASS(Blueprintable)
class UFortContentControlSettingRegistry : public UFortSettingRegistry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingCollection* ContentControlSettings;
    
public:
    UFortContentControlSettingRegistry();
};

