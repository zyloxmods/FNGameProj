#pragma once
#include "CoreMinimal.h"
#include "ContentInstallError.generated.h"

USTRUCT(BlueprintType)
struct FContentInstallError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    FORTNITEGAME_API FContentInstallError();
};

