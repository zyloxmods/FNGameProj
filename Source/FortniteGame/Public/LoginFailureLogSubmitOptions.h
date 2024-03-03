#pragma once
#include "CoreMinimal.h"
#include "ELoginResult.h"
#include "LoginFailureLogSubmitOptions.generated.h"

USTRUCT(BlueprintType)
struct FLoginFailureLogSubmitOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitSecondaryLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogTailKb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogSubmitChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELoginResult> DoNotUploadReasons;
    
    FORTNITEGAME_API FLoginFailureLogSubmitOptions();
};

