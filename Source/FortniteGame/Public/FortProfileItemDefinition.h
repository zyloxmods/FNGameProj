#pragma once
#include "CoreMinimal.h"
#include "FortPersistableItemDefinition.h"
#include "FortProfileItemDefinition.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortProfileItemDefinition : public UFortPersistableItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeFavorite: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeMarkedSeen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GrantToProfileType;
    
public:
    UFortProfileItemDefinition(const FObjectInitializer& ObjectInitializer);
};

