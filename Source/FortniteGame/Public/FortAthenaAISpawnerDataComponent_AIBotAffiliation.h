#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_AffiliationBase.h"
#include "FortAthenaAISpawnerDataComponent_AIBotAffiliation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_AIBotAffiliation : public UFortAthenaAISpawnerDataComponent_AffiliationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideIsAnAthenaGameParticipant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAnAthenaGameParticipant: 1;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotAffiliation();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSquadID(int32& OutSquadId);
    
};

