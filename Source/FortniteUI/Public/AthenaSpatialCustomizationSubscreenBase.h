#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaSpatialCustomizationSubscreenBase.generated.h"

class UAthenaSpatialCustomizationRoomData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationSubscreenBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationRoomData* CustomizationRoomData;
    
public:
    UAthenaSpatialCustomizationSubscreenBase();
};

