#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "FortLinkedAnimLayerInterface.generated.h"

class UAnimInstance;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortLinkedAnimLayerInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortLinkedAnimLayerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UAnimInstance> GetAssociatedLinkedAnimLayerClass() const;
    
};

