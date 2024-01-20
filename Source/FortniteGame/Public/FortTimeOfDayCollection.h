#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTimeOfDayCollection.generated.h"

class AFortTimeOfDayManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTimeOfDayCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AFortTimeOfDayManager>> TimeOfDayManagers;
    
public:
    UFortTimeOfDayCollection();
};

