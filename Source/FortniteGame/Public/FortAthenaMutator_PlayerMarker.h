#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "PlayerMarkerMutatorEffectData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_PlayerMarker.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_PlayerMarker : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PlayerMarkerMarkerEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxTeamAliveCountForMarker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPlayerMarkerMutatorEffectData> PlayerMarkerEffectDataArray;
    
public:
    AFortAthenaMutator_PlayerMarker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

