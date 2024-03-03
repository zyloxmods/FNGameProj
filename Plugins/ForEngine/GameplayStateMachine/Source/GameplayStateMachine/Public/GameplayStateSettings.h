#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GameplayStateSettings.generated.h"

class UGameplayState;

USTRUCT(BlueprintType)
struct GAMEPLAYSTATEMACHINE_API FGameplayStateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayState> StateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateId;
    
    FGameplayStateSettings();
};

