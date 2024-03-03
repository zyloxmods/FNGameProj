#pragma once
#include "CoreMinimal.h"
#include "AthenaNewsMessages.h"
#include "AthenaNewsSource.generated.h"

USTRUCT(BlueprintType)
struct FAthenaNewsSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaNewsMessages news;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _locale;
    
    FORTNITEUI_API FAthenaNewsSource();
};

