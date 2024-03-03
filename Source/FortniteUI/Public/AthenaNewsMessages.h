#pragma once
#include "CoreMinimal.h"
#include "AthenaNewsData.h"
#include "AthenaNewsPlatformData.h"
#include "AthenaNewsMessages.generated.h"

USTRUCT(BlueprintType)
struct FAthenaNewsMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaNewsData> Messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaNewsPlatformData> platform_messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _type;
    
    FORTNITEUI_API FAthenaNewsMessages();
};

