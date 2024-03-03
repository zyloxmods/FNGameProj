#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortChallengeBundleProgressToken.generated.h"

class UFortChallengeBundleItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortChallengeBundleProgressToken : public UFortAccountItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bundle_template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortChallengeBundleItemDefinition* BundleItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> completion_bits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> completion_times;
    
public:
    UFortChallengeBundleProgressToken();
};

