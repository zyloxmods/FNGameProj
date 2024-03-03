#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicGameModeMutatorInterface.generated.h"

class AFortPlayerStateAthena;

UINTERFACE()
class ARSENICCORERUNTIME_API UArsenicGameModeMutatorInterface : public UInterface {
    GENERATED_BODY()
};

class ARSENICCORERUNTIME_API IArsenicGameModeMutatorInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    virtual void BroadcastArsenicOnPlayerStatusChange(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus PlayerStatus) PURE_VIRTUAL(BroadcastArsenicOnPlayerStatusChange,);
    
};

