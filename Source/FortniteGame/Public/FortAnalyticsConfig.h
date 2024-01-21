#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAnalyticsConfig.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortAnalyticsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AltDomains;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UrlEndpoint;
    
    UFortAnalyticsConfig();
};

