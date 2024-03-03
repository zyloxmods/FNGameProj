#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HUDWidgetBehaviorRegistryEntry.generated.h"

class UHUDWidgetBehavior;

USTRUCT(BlueprintType)
struct FHUDWidgetBehaviorRegistryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDWidgetBehaviorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDWidgetOverrideTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDWidgetBehavior> HUDWidgetBehaviorClass;
    
    FORTNITEUI_API FHUDWidgetBehaviorRegistryEntry();
};

