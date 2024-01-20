#pragma once
#include "CoreMinimal.h"
#include "FortWorldMarkerData.h"
#include "EFortMarkerActions.h"
#include "FortHUDElementWidget.h"
#include "AthenaMarkerDetails.generated.h"

class UAthenaMarkerPointer;
class UFortMarkerDetailsTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMarkerDetails : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMarkerPointer* MarkerPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMarkerDetailsTable* DetailsTable;
    
public:
    UAthenaMarkerDetails();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMarkerData(const FFortWorldMarkerData& MarkerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMarkerAction(EFortMarkerActions MarkerAction);
    
};

