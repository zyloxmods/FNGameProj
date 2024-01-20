#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IssuedFriendCode.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FIssuedFriendCode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateCreated;
    
    FIssuedFriendCode();
};

