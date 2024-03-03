#pragma once
#include "CoreMinimal.h"
#include "PurchaseFailureLogSubmitOptions.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseFailureLogSubmitOptions {
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
    TArray<FString> DoNotUploadReasons;
    
    FORTNITEGAME_API FPurchaseFailureLogSubmitOptions();
};

