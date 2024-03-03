#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_PluginHUDContent.generated.h"

class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_PluginHUDContent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UWidget>> PluginHUDElements;
    
    UFortControllerComponent_PluginHUDContent();
};

