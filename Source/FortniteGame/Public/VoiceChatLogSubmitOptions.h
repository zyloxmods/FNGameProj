#pragma once
#include "CoreMinimal.h"
#include "VoiceChatLogUploadRule.h"
#include "VoiceChatLogSubmitOptions.generated.h"

USTRUCT(BlueprintType)
struct FVoiceChatLogSubmitOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubmitSecondaryLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogTailKb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoiceChatLogUploadRule> IncludeRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoiceChatLogUploadRule> ExcludeRules;
    
    FORTNITEGAME_API FVoiceChatLogSubmitOptions();
};

