#pragma once
#include "CoreMinimal.h"
#include "AthenaNewsData.h"
#include "AthenaNewsPlatformData.generated.h"

USTRUCT(BlueprintType)
struct FAthenaNewsPlatformData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaNewsData Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _type;
    
    FORTNITEUI_API FAthenaNewsPlatformData();
};

