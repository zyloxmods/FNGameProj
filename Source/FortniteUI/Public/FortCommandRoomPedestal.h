#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewPedestal.h"
#include "FortCommandRoomPedestal.generated.h"

UCLASS(Blueprintable)
class AFortCommandRoomPedestal : public AFortItemPreviewPedestal {
    GENERATED_BODY()
public:
    AFortCommandRoomPedestal();
private:
    UFUNCTION(BlueprintCallable)
    void HandleDifferentHeroSet();
    
};

