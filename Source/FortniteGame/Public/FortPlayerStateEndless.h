#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerStatePvE.h"
#include "FortPlayerStateEndless.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerStateEndless : public AFortPlayerStatePvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BluGloActivityScore;
    
public:
    AFortPlayerStateEndless();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddBluGloActivityScoreForPlayer(const FVector& BurnerLocation);
    
};

