#pragma once
#include "CoreMinimal.h"
#include "AthenaWinnerInfo.generated.h"

USTRUCT(BlueprintType)
struct FAthenaWinnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BigNameWinnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WinnerNames;
    
    FORTNITEUI_API FAthenaWinnerInfo();
};

