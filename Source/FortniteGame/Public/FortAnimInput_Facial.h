#pragma once
#include "CoreMinimal.h"
#include "EFortFacialAnimTypes.h"
#include "FortAnimInput_Facial.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_Facial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SubjectName_Provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SubjectName_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFacialAnimTypes CurrentAnimType;
    
    FORTNITEGAME_API FFortAnimInput_Facial();
};

