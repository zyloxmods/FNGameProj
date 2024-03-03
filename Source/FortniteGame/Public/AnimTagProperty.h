#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimTagProperty.generated.h"

USTRUCT(BlueprintType)
struct FAnimTagProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BackingGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> PropertyToEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExactTag;
    
    FORTNITEGAME_API FAnimTagProperty();
};

