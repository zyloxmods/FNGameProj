#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayStatTag.generated.h"

USTRUCT(BlueprintType)
struct EPICGAMEPLAYSTATSRUNTIME_API FGameplayStatTag : public FGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    FGameplayStatTag();
};

