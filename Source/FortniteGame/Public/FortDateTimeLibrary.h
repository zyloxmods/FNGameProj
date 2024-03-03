#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ETimespanAsTextFormat.h"
#include "ETimespanUnitDisplayFormat.h"
#include "FortDateTimeLibrary.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortDateTimeLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortDateTimeLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan GetTimeTillEventTagEnds(AFortPlayerController* FortPC, const FString& EventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTimespanAsText(const FTimespan& Timespan, bool bShowSeconds, ETimespanAsTextFormat FormatType, ETimespanUnitDisplayFormat UnitDisplayType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan GetTimeSinceEventTagStart(AFortPlayerController* FortPC, const FString& EventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan GetTimeSinceAthenaSeasonStart(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetMcpRelativeUtcNow(AFortPlayerController* FortPC);
    
};

