#pragma once
#include "CoreMinimal.h"
#include "ESavedAccountType.h"
#include "SavedCredentials.generated.h"

USTRUCT(BlueprintType)
struct FSavedCredentials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESavedAccountType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    FORTNITEGAME_API FSavedCredentials();
};

