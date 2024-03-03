#pragma once
#include "CoreMinimal.h"
#include "PropertyOverrideMk2.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverrideMk2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString PropertyScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString PropertyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DefaultPropertyData;
    
    FORTNITEGAME_API FPropertyOverrideMk2();
};

