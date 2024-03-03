#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "SaveDataSubsystem.generated.h"

class UDeviceSaveCollection;

UCLASS(Blueprintable)
class FORTNITEGAME_API USaveDataSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeviceSaveCollection* LocalForDevice;
    
public:
    USaveDataSubsystem();
};

