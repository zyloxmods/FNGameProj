#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Templates/SubclassOf.h"
#include "DeviceSaveCollection.generated.h"

class USaveData;

UCLASS(Blueprintable)
class UDeviceSaveCollection : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USaveData>, USaveData*> Settings;
    
    UDeviceSaveCollection();
};

