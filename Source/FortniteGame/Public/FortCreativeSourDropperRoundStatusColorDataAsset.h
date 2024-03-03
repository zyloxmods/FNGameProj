#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortTeamAffiliation.h"
#include "FortSourDropperColorData.h"
#include "FortCreativeSourDropperRoundStatusColorDataAsset.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativeSourDropperRoundStatusColorDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortTeamAffiliation::Type>, FFortSourDropperColorData> AffiliationColors;
    
    UFortCreativeSourDropperRoundStatusColorDataAsset();
};

