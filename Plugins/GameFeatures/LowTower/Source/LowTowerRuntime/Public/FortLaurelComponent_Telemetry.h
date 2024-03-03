#pragma once
#include "CoreMinimal.h"
#include "FortAIComponent_Telemetry.h"
#include "ELaurelDropItemReason.h"
#include "ELaurelExtractionReason.h"
#include "ELaurelType.h"
#include "FortLaurelComponent_Telemetry.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortLaurelComponent_Telemetry : public UFortAIComponent_Telemetry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELaurelType LaurelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELaurelExtractionReason ExtractionReason;
    
public:
    UFortLaurelComponent_Telemetry();
    UFUNCTION(BlueprintCallable)
    void SetLaurelType(const ELaurelType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetExtractionReason(const ELaurelExtractionReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnDropAllItems(const TEnumAsByte<ELaurelDropItemReason::Type> DropItemReason);
    
};

