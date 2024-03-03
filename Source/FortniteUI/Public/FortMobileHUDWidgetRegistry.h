#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetRegistryBase.h"
#include "FortMobileHUDContextModelExtension.h"
#include "HUDWidgetBehaviorRegistryEntry.h"
#include "HUDWidgetRegistryEntry.h"
#include "FortMobileHUDWidgetRegistry.generated.h"

class UFortMobileHUDContextModel;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileHUDWidgetRegistry : public UFortMobileHUDWidgetRegistryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDWidgetBehaviorRegistryEntry> HUDWidgetBehaviorRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDWidgetRegistryEntry> HUDWidgetRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHUDContextModel*> ContextLayoutModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDContextModelExtension> ContextLayoutModelExtensions;
    
public:
    UFortMobileHUDWidgetRegistry();
};

