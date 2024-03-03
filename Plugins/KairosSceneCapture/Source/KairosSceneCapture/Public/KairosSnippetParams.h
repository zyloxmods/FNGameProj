#pragma once
#include "CoreMinimal.h"
#include "KairosSnippetParams.generated.h"

USTRUCT(BlueprintType)
struct FKairosSnippetParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    KAIROSSCENECAPTURE_API FKairosSnippetParams();
};

