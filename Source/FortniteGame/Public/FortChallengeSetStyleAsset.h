#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortChallengeSetStyle.h"
#include "FortChallengeSetStyleAsset.generated.h"

UCLASS(Blueprintable)
class UFortChallengeSetStyleAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortChallengeSetStyle Style;
    
    UFortChallengeSetStyleAsset();
};

