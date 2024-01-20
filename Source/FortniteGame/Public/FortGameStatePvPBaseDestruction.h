#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "FortGameStatePvP.h"
#include "FortGameStatePvPBaseDestruction.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStatePvPBaseDestruction : public AFortGameStatePvP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SessionXPRowName;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRichCurve TeamLevelToSessionXPCurve;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRichCurve SessionXPToTeamLevelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxTeamLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxTeamExperience;
    
public:
    AFortGameStatePvPBaseDestruction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamLevelForExperienceAmount(int32 Experience) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTeamLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTeamExperience() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExperienceRequiredForTeamLevel(int32 TeamLevel) const;
    
};

